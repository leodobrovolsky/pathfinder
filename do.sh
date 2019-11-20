if [[ $1 == "compile" ]]; then
	make uninstall
	make
fi
clang *.c libmx.a
./a.out $1