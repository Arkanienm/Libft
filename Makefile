# Nom de la librairie à générer
NAME = libft.a

# Liste des fichiers sources (.c) présents dans le dossier
SRCS = $(wildcard *.c)
# Liste des fichiers objets (.o) générés à partir des sources
OBJS = $(SRCS:.c=.o)

# Compilateur utilisé
CC = cc
# Options de compilation : affichage des warnings
CFLAGS = -Wall -Wextra -Werror 

# Règle principale : génère la librairie
all: $(NAME)

# Génération de la librairie à partir des objets
$(NAME): $(OBJS)
	ar rcs $@ $^

# Compilation de chaque fichier source en objet
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supprime les fichiers objets
clean:
	rm -f $(OBJS)

# Supprime la librairie et les objets
fclean: clean
	rm -f $(NAME)

# Recompile tout (fclean puis all)
re: fclean all

# Indique que ces cibles ne sont pas des fichiers
.PHONY: all clean fclean re