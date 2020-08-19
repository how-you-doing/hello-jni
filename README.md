# hello-jni
Beginner guide to JNI

# Steps

## Simple c/cpp program
1. Create a "c" or "cpp" program file
    - ex: MessagePrinter.cpp
    - compile the program 
    ```
    gcc MessagePrinter.cpp -o printer
    ./printer
    ```
    - This program will print "Hello World" as output

## Simple java program (template)
2. Create a "java" program file
    - ex: MessagePrinter.java
    - compile the program
    ```
    javac MessagePrinter.java
    ```
    - generate c headers
    ```
    javah MessagePrinter
    ```
    - This will output `MessagePrinter.h` in the same directory

## Create a shared lib
3. Create a new cpp program with jni header
    - ex: MessagePrinter.java
    - Now It is possible to "shared lib",
    - For linux: 
    ```
    gcc -fPIC -I/usr/lib/jvm/java-1.8.0-openjdk-amd64/include/ -I/usr/lib/jvm/java-1.8.0-openjdk-amd64/include/linux -shared -o libprinter.so MessagePrinter2.cpp
    ```
    - This will output `libprinter.so` in the same directory
    ---
    - For MacOS
    ```
    gcc -fPIC -I/Library/Java/JavaVirtualMachines/jdk1.8.0_77.jdk/Contents/Home/include/ -I/Library/Java/JavaVirtualMachines/jdk1.8.0_77.jdk/Contents/Home/include/darwin/ -shared -o libprinter.dylib MessagePrinter2.cpp
    ```
    - This will output `libprinter.dylib` in the same directory

## Access the shared lib inside java program (client)
4. Create a java program
    - ex: TestClient.java
    - compile the program
    ```
    javac TestClient.java 
    ```
    - run the program
    ```
    java -Djava.library.path=. TestClient
    ```
    - You will get the output as "HelloWorld!"

## References
1. https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html
2. https://stackoverflow.com/a/8459911/5739971
