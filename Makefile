NAME = pathfinder

CFLAG = -std=c11 -Wall -Wextra -Werror -Wpedantic

OBJ_DIR = obj

INC = inc/pathfinder.h

INCS = pathfinder.h

SRCS = main.c mx_add_path_begin.c mx_add_path_end.c mx_check_str.c mx_copy_path.c mx_count_islands.c mx_create_arr_path.c mx_create_route.c mx_del_path.c mx_del_route.c mx_del_route_arr.c mx_file_to_string.c mx_get_from_line.c mx_get_islands.c mx_lines_to_structs.c mx_path_route_cmp.c mx_print_path.c mx_print_route.c mx_print_route_arr.c mx_push_route.c mx_push_route_arr.c mx_search_route.c mx_str_to_lines.c mx_test_case.c mx_validation_line.c 

SRC =  src/main.c src/mx_add_path_begin.c src/mx_add_path_end.c src/mx_check_str.c src/mx_copy_path.c src/mx_count_islands.c src/mx_create_arr_path.c src/mx_create_route.c src/mx_del_path.c src/mx_del_route.c src/mx_del_route_arr.c src/mx_file_to_string.c src/mx_get_from_line.c src/mx_get_islands.c src/mx_lines_to_structs.c src/mx_path_route_cmp.c src/mx_print_path.c src/mx_print_route.c src/mx_print_route_arr.c src/mx_push_route.c src/mx_push_route_arr.c src/mx_search_route.c src/mx_str_to_lines.c src/mx_test_case.c src/mx_validation_line.c

OBJS =  main.o mx_add_path_begin.o mx_add_path_end.o mx_check_str.o mx_copy_path.o mx_count_islands.o mx_create_arr_path.o mx_create_route.o mx_del_path.o mx_del_route.o mx_del_route_arr.o mx_file_to_string.o mx_get_from_line.o mx_get_islands.o mx_lines_to_structs.o mx_path_route_cmp.o mx_print_path.o mx_print_route.o mx_print_route_arr.o mx_push_route.o mx_push_route_arr.o mx_search_route.o mx_str_to_lines.o mx_test_case.o mx_validation_line.o

OBJ =  obj/main.o obj/mx_add_path_begin.o obj/mx_add_path_end.o obj/mx_check_str.o obj/mx_copy_path.o obj/mx_count_islands.o obj/mx_create_arr_path.o obj/mx_create_route.o obj/mx_del_path.o obj/mx_del_route.o obj/mx_del_route_arr.o obj/mx_file_to_string.o obj/mx_get_from_line.o obj/mx_get_islands.o obj/mx_lines_to_structs.o obj/mx_path_route_cmp.o obj/mx_print_path.o obj/mx_print_route.o obj/mx_print_route_arr.o obj/mx_push_route.o obj/mx_push_route_arr.o obj/mx_search_route.o obj/mx_str_to_lines.o obj/mx_test_case.o obj/mx_validation_line.o


all: install clean
install:

uninstall: clean
	@rm -rf pathfinder
clean:

reinstall: uninstall clean all
