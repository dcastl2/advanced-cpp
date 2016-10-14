#!/bin/bash

##############################################################################
# To run bash.sh:
#    sh bash.sh
#
# To make bash.sh executable and run it:
#    chmod 755 bash.sh
#    ./bash.sh
##############################################################################


##############################################################################
# Put all .h and .cpp files into a folder named src/, and all executables
# into a folder named bin/
##############################################################################
file_sort() {
  mkdir src
  mv *.cpp *.h src/
  mkdir bin
  mv `find . -executable` bin/
}

##############################################################################
# Compile all .cpp files
##############################################################################
compile_all() {
  for sourcefile in `ls *.cpp`
  do
    exename=`echo $sourcefile | sed 's/\.cpp//'`
    g++ -std=c++11 $sourcefile -o $exename
  done
}

##############################################################################
# Display all .cpp and .h files, allowing user to hit Enter between files
##############################################################################
show_all() {
  for sourcefile in `ls *.cpp *.h`
  do
    nl -b a $sourcefile
    read
  done
}

##############################################################################
# Tell if any files are the same
##############################################################################
diff_all() {
  for file1 in `ls *.*`
  do
    printf '=%.0s' {1..80}
    echo
    for file2 in `ls *.*`
    do
      diff $file1 $file2
    done
  done
}

##############################################################################
# A clock
##############################################################################
clock() {
  while [ true ] 
  do
    date
    sleep 1
    clear
  done
}

clock
