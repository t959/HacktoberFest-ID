#!/usr/bin/env bash

# MIT License

# Copyright (c) 2020 M Zulfikar

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# LANGUAGE: Bourne Again Shell (bash)
# AUTHOR: Fikar
# GITHUB: https://github.com/mohzulfikar

if [ $# -eq 0 ] # jika tidak diberikan argumen 
then
    echo "usage: ./ganjilGenap.sh arg1"
    exit 1	# exit program dengan status error
fi

periksa=$1
regxNum='^[0-9]+$' # regex memeriksa angka
if ! [[ $periksa =~ $regxNum ]] # periksa regex dengan variabel 
then
    echo "argumen harus dalam bentuk bilangan bulat positif!"
    exit 1
elif [ $periksa -lt 0 ] # jika kurang dari 0
then
    echo "argumen harus bilangan bulat >= 0"
    exit 1
fi

if (($periksa % 2))
then 
    echo "$periksa adalah ganjil"
else
    echo "$periksa adalah genap"
fi