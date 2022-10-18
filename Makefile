SRC = $(wildcard src/*.c)
OBJS := $(SRC:.c=.o)
BUILDDIR ?= build
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))

vector: $(OBJS)
	gcc -o $@ $^
$(BUILDDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -c $^ -o $@
clean:
	rm -rf $(BUILDDIR) vector