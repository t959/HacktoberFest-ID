#!/usr/bin/env bash

if [ $# -eq 0 ] # jika tidak diberikan argumen 
then
    echo "usage: ./ganjilGenap.sh arg1"
    exit 1	# exit program dengan status error
fi

periksa=$1
regxNum='^[0-9]+$'
if ! [[ $periksa =~ $regxNum ]] 
then
    echo "argumen harus dalam bentuk bilangan bulat positif!"
    exit 1
elif [ $periksa -lt 0 ] # jika kurang dari 0
then
    echo "argumen harus bilangan bulat >= 0"
    exit 1	# exit program dengan status error
fi

if (($periksa % 2))
then 
    echo "$periksa adalah ganjil"
else
    echo "$periksa adalah genap"
fi