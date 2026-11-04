# FLOW007 - Rating 585

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-04T02:12:53.600Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a<=50){
            cout<<"LEFT\n";
        }
        else{
            cout<<"RIGHT\n";
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW007)