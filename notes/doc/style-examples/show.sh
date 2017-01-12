#!/bin/bash

for badfile in `ls bad*`
do
  goodfile=`echo $badfile | sed 's/bad/good/'`
  vim $badfile -O $goodfile
done
