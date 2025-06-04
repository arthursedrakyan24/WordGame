all:
	mkdir -p bin/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -rf bin/

run:
	cd bin && ./words
