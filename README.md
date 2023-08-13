# README
## Single-Function (Codewriting)
Implement the function in your preferred language. When run, your function is wrapped in a class, so some declarations may result in a Syntax (Compilation) Error.

Keep the following details in mind:

- Do not change the name of the function/method. Changing its name will result in a syntax error.
- You can write to stdout for debugging purposes; output will be displayed under each test case.
- If the value of some input/output argument is a string that contains double quote characters (") it will be shown in the output with an additional symbol. E.g. ```inputString = hello"world"hello``` will be displayed in the console as ```"hello"world"hello"```.

## Language

### C++ (G++ v11.1.0)

We support G++ _v11.1.0_. Feel free to use ```unordered_map, regex, range for, auto ...``` features from C++11, 14 and 17 standards.

You can use ```cout << ... << endl``` to print any data for debugging purposes.

The following libraries are automatically included:

```
#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstdio>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <jsoncpp/json/json.h>
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
```

Some best practices for C++:

1. When declaring global variables in C++, initializing them during declaration will result in a syntax error. Instead, perform an initialization in the function/method.
2. Static variables are disabled in C++, so using them will lead to unexpected results.
3. The std namespace is already included. Feel free to use std features without the std:: prefix.
4. Use C++11, 14 and 17 features, e.g. ```for (auto x: vec) {...}```, ```lambda functions [](int a, int b) -> bool {...}```.

## Verdicts

After you submit your code for testing, the following verdicts are possible:

1. __Compilation/syntax error__ - This means you probably have some syntax errors in your source code. More detailed information will be given along with the verdict to help you identify the issue.
2. __Execution error__ - This means your code has crashed. Most likely, it crashes only for some input parameters. More detailed information will be given along with the verdict to help you identify the issue.
3. __Compilation time exceeded__ - This verdict happens rarely, mostly for C++ or Java. This means that your code is either too long or you overused templates, which results in very slow compilation of your code.
4. __Execution time limit exceeded__ - This means that your code didn't finish executing within the given time limit. It either got hung up on one of the test cases, or it just works very slowly. It's likely that your solution is either not optimally efficient, or you have a bug in the code.
5. __Output limit exceeded__ - This verdict happens rarely. It means that either your function return value size is too big (e.g. you returned a very big array or matrix), or that you overused console outputs and essentially spammed it with a lot of data. One possible cause of such an issue is that you have a console output inside an infinite loop.
6. __Answer limit exceeded__ - This verdict indicates that your program had return values that were too large to process. The correct answer will not be this large.
7. __Memory limit exceeded__ - This means that your program ran out of memory of 1 GB. Try optimizing your memory usage and resolving any memory leaks in order to fix the issue.
8. __Wrong answer__ - This verdict means that your code was compiled and ran successfully, but it returned an incorrect output for one or more test cases. More detailed information will be provided to help you diagnose the issue.
9. __All tests passed__ - This means that your code works correctly and passed all the tests within the given time limit.
