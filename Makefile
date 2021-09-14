run: 
	g++ -g -Iinclude/v8 No.cc core/*.cc -o No -lv8_monolith -ldl -Llib -pthread -std=c++14 -DV8_COMPRESS_POINTERS