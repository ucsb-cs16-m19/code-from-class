# thing_you_want_to_make: requirement1 requirement2 requirement3 ...
# 	step 1 to make it
# 	step 2 to make it
# 	...


# this is a variable
CXX=g++

# we want to make hello 
# we need the implementation file to make it
hello: hello.o
	# we just need to run g++ in order to compile and create the hello executable
	# a bunch of terminal commands go here
	# they're all tab-indented
	g++ hello.o -o hello

hello.o: hello.cpp
	g++ -c hello.cpp

shapes.o: shapes.cpp
	g++ -c shapes.cpp

# testShapes: shapes.o testShapes.o tdd.o
# 	g++ shapes.o testShapes.o tdd.o -o testShapes

# $^ is the entire list of requirements
# $@ is the name of the thing you're trying to make (the "target")

# this is identical to the above
testShapes: shapes.o testShapes.o tdd.o
	$(CXX) $^ -o $@

tdd.o: tdd.cpp
	g++ -c tdd.cpp

# there are default make rules for .cpp files
# technically, I can say "make base_conversion", and it will
# run a default rule that does exactly what we see below.
# It works because there's only one implementation file involved.

# base_conversion: base_conversion.cpp
# 	g++ -o base_conversion base_conversion.cpp

# there are also default rules for .o files
# so I really don't have to give the below .o-making rule
# (or any of the .o rules for that matter)

# testShapes.o: testShapes.cpp
# 	g++ -c testShapes.cpp

# "dummy" rules don't make anything; they just do stuff
clean:
	# remove all the compiled files
	rm -f *.o testShapes hello