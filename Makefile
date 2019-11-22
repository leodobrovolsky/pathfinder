NAME = pathfinder

CFLAG = -std=c11 -Wall -Wextra -Werror -Wpedantic

OBJ_DIR = obj

INC = inc/pathfinder.h

LIB = libmx/libmx.a

LIBS = libmx.a

INCS = pathfinder.h

SRCS = main.c mx_check_str.c mx_count_islands.c mx_create_route.c mx_del_route_arr.c mx_del_route_index.c mx_file_to_string.c mx_get_from_line.c mx_get_islands.c mx_get_pointer.c mx_get_route_end.c mx_lines_to_structs.c mx_path_cmp.c mx_print_route.c mx_print_route_arr.c mx_push_route.c mx_push_route_arr.c mx_route_clean.c mx_route_cmp.c mx_search_route.c mx_str_to_lines.c mx_sum_route_dist.c mx_validation_line.c 

SRC =  src/main.c src/mx_check_str.c src/mx_count_islands.c src/mx_create_route.c src/mx_del_route_arr.c src/mx_del_route_index.c src/mx_file_to_string.c src/mx_get_from_line.c src/mx_get_islands.c src/mx_get_pointer.c src/mx_get_route_end.c src/mx_lines_to_structs.c src/mx_path_cmp.c src/mx_print_route.c src/mx_print_route_arr.c src/mx_push_route.c src/mx_push_route_arr.c src/mx_route_clean.c src/mx_route_cmp.c src/mx_search_route.c src/mx_str_to_lines.c src/mx_sum_route_dist.c src/mx_validation_line.c

OBJS =  main.o mx_check_str.o mx_count_islands.o mx_create_route.o mx_del_route_arr.o mx_del_route_index.o mx_file_to_string.o mx_get_from_line.o mx_get_islands.o mx_get_pointer.o mx_get_route_end.o mx_lines_to_structs.o mx_path_cmp.o mx_print_route.o mx_print_route_arr.o mx_push_route.o mx_push_route_arr.o mx_route_clean.o mx_route_cmp.o mx_search_route.o mx_str_to_lines.o mx_sum_route_dist.o mx_validation_line.o

OBJ =  obj/main.o obj/mx_check_str.o obj/mx_count_islands.o obj/mx_create_route.o obj/mx_del_route_arr.o obj/mx_del_route_index.o obj/mx_file_to_string.o obj/mx_get_from_line.o obj/mx_get_islands.o obj/mx_get_pointer.o obj/mx_get_route_end.o obj/mx_lines_to_structs.o obj/mx_path_cmp.o obj/mx_print_route.o obj/mx_print_route_arr.o obj/mx_push_route.o obj/mx_push_route_arr.o obj/mx_route_clean.o obj/mx_route_cmp.o obj/mx_search_route.o obj/mx_str_to_lines.o obj/mx_sum_route_dist.o obj/mx_validation_line.o


all: install clean
install:
	@cd libmx
	@make -c
	@cd ..
	@cp $(LIB) .
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAG) -o $(NAME) $(SRCS) -I $(INCS) $(LIBS)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(SRCS)
	@rm -rf $(INCS)
	@rm -rf $(LIBS)
reinstall: uninstall all
