# FLIPCARDS - Rating 639

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-24T01:31:50.201Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n){
        int a,b;
        cin>>a>>b;
        cout<<abs(a-b)<<"\n";
        n--;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLIPCARDS)