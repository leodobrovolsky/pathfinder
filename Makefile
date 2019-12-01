NAME = pathfinder

CFLAG = -std=c11 -Wall -Wextra -Werror -Wpedantic

LIBS = libmx.a

INC = inc/pathfinder.h

INCS = pathfinder.h

SRC =  src/main.c src/mx_check_str.c src/mx_count_islands.c src/mx_create_route.c src/mx_del_line.c src/mx_del_route_arr.c src/mx_del_route_index.c src/mx_file_to_string.c src/mx_get_from_line.c src/mx_get_islands.c src/mx_get_pointer.c src/mx_get_route_end.c src/mx_lines_to_structs.c src/mx_path_cmp.c src/mx_print_dist.c src/mx_print_route.c src/mx_print_route_arr.c src/mx_push_route.c src/mx_push_route_arr.c src/mx_route_check.c src/mx_route_clean.c src/mx_route_cmp.c src/mx_route_end.c src/mx_search_route.c src/mx_str_to_lines.c src/mx_sum_route_dist.c src/mx_validation_line.c

SRCS =  main.c mx_check_str.c mx_count_islands.c mx_create_route.c mx_del_line.c mx_del_route_arr.c mx_del_route_index.c mx_file_to_string.c mx_get_from_line.c mx_get_islands.c mx_get_pointer.c mx_get_route_end.c mx_lines_to_structs.c mx_path_cmp.c mx_print_dist.c mx_print_route.c mx_print_route_arr.c mx_push_route.c mx_push_route_arr.c mx_route_check.c mx_route_clean.c mx_route_cmp.c mx_route_end.c mx_search_route.c mx_str_to_lines.c mx_sum_route_dist.c mx_validation_line.c


all: install clean
install:
	@make -C libmx install
	@cp libmx/libmx.a .
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAG) -o $(NAME) $(SRCS) -I $(INCS) $(LIBS)
uninstall: clean
	@rm -rf $(NAME)
	@make -C libmx uninstall
clean:
	@rm -rf $(SRCS)
	@rm -rf $(INCS)
	@rm -rf $(LIBS)
	@make -C libmx clean
reinstall:
	@rm -rf $(NAME)
	@rm -rf $(LIBS)
	@make -C libmx reinstall
	@cp libmx/libmx.a .
	@rm -rf $(SRCS)
	@rm -rf $(INCS)
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAG) -o $(NAME) $(SRCS) -I $(INCS) $(LIBS)
	@rm -rf $(SRCS)
	@rm -rf $(INCS)
	@rm -rf $(LIBS)
