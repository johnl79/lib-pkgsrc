# $NetBSD$
#
# Copyright (c) 2012 Joyent, Inc.  All rights reserved.
#
# This code is derived from software contributed to The NetBSD Foundation
# by Jonathan Perkin <jperkin@joyent.com>
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
# COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
# OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.

#
# Convert ${{BIN,LIB}ARCHSUFFIX} into lines for each supported ABI.
#
# Requires that for each var in MULTIARCH_ABIS there is a corresponding
# {BIN,LIB}ARCHSUFFIX_${var} environment variable set pointing to the
# appropriate directory.
#
BEGIN {
	PLIST_MULTIARCH_ABIS = ENVIRON["MULTIARCH_ABIS"]
	PLIST_USE_MULTIARCH = ENVIRON["_MULTIARCH"] ? ENVIRON["_MULTIARCH"] : ""
	split(PLIST_MULTIARCH_ABIS, abis, " ")
}

PLIST_USE_MULTIARCH && (/[$][{]LIBARCHSUFFIX[}]/ || /[$][{]BINARCHSUFFIX[}]/) {
	for (abi in abis) {
		binvar = "BINARCHSUFFIX_" abis[abi]
		binval = ENVIRON[binvar]
		libvar = "LIBARCHSUFFIX_" abis[abi]
		libval = ENVIRON[libvar]
		line = $0
		gsub(/[$][{]BINARCHSUFFIX[}]/, binval, line)
		gsub(/[$][{]LIBARCHSUFFIX[}]/, libval, line)
		print_entry(line)
	}
	next
	print_entry($0)
}

/[$][{]LIBARCHSUFFIX[}]/ || /[$][{]BINARCHSUFFIX[}]/ {
	gsub(/[$][{]BINARCHSUFFIX[}]/, "")
	gsub(/[$][{]LIBARCHSUFFIX[}]/, "")
}
