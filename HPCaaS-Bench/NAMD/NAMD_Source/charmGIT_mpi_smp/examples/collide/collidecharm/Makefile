-include ../../common.mk
CHARMC=../../../bin/charmc $(OPTS)

OBJS = hello_fn.o hello_cb.o hello_dist.o

all:	cifiles hello_fn hello_cb hello_dist

hello_fn: hello_fn.o
	$(CHARMC) -language charm++ -module collidecharm -o hello_fn hello_fn.o

hello_cb: hello_cb.o
	$(CHARMC) -language charm++ -module collidecharm -o hello_cb hello_cb.o

hello_dist: hello_dist.o
	$(CHARMC) -language charm++ -module collidecharm -o hello_dist hello_dist.o

cifiles: hello.ci
	$(CHARMC)  hello.ci

clean:
	rm -f *.decl.h *.def.h conv-host *.o hello_fn hello_cb charmrun

hello_fn.o: hello.C
	$(CHARMC) -DCOLLIDE_USE_CB=0 -c hello.C -o hello_fn.o

hello_cb.o: hello.C
	$(CHARMC) -DCOLLIDE_USE_CB=1 -c hello.C -o hello_cb.o

hello_dist.o: hello.C
	$(CHARMC) -DCOLLIDE_USE_DIST=1 -c hello.C -o hello_dist.o

test: all
	$(call run, ./hello_fn +p4 10 )
	$(call run, ./hello_cb +p4 10 )
	$(call run, ./hello_dist +p4 10 )
