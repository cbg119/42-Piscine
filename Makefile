###########################
#                         #
#    MAKEFILE FRAMEWORK   #
#                         #
###########################

# COMPILER & FLAGS ===========================================================

CC       =      gcc

ALLFLAGS =      $(CFLAGS)

CFLAGS   =      -Wall -Werror -Wextra $(GFLAGS) $(FSFLAGS)

GFLAGS   =      -g -O0 -std=c11 \
                -Wshadow-all \
                -Wsign-compare

FSFLAGS  =      -fsanitize=integer \
                -fsanitize=undefined \
                -fsanitize=address \
                -fsanitize-address-use-after-scope



# VARIABLES ==================================================================

NAME     =     test_main



# MAIN =======================================================================

all: $(NAME)

$(NAME): $(NAME).c
	@$(CC) $(ALLFLAGS) $< -o "a"
	@echo && echo "Pwd/" && ls "./" && echo



# HOUSE KEEPING ==============================================================

DEL       =     /bin/rm -rf
JUNK      =     *.dSYM *.DS
CLONES    =     clone_*

clean:
	@echo
	@$(DEL) $(JUNK)
	@echo "[√]	Junk Cleared"

fclean: clean
	@$(DEL) "a"
	@echo "[√]	Binary Cleared"

clclean:
	@$(DEL) $(CLONES)
	@echo "[√]	Clones Cleared"

re: fclean all

# CLEANING SHORTCUTS =========================================================

cl: clean
	@echo && echo "Pwd/" && ls "./" && echo

f: fclean
	@echo && echo "Pwd/" && ls "./" && echo

x: clean fclean clclean
	@$(DEL) Makefile test_main.c a
	@echo && echo "Pwd/" && ls "./" && echo

# ============================================================================

.PHONY: all clean fclean clclean re cl f x

# ============================================================================

