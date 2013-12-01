X10C=${X10_HOME}/bin/x10c++
FLAGS=-O

PageRank: Main.x10 Solver.x10 WebNode.x10
	$(X10C) $(FLAGS) -o $@ $^

test: PageRank
	./PageRank 10Kresults
	./PageRank 50Kresults
	./PageRank 100Kresults

clean:
	rm -f PageRank *.h *.out *.err *.log *~ *.cc