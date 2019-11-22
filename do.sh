rm $1
touch $1
clang *.c libmx.a
./a.out $1