#include <bits/stdc++.h>

#define namefile "PLUS"

typedef char NameFile[1000];

using namespace std;

NameFile input, output, answer;
ifstream fi, fo, fa;
int n, m, p, q;

int readInput() {
  fi.open(input);
}

int readOutput() {
  fo.open(output);
}

int readAnswer() {
  fa.open(answer);
}

bool check() {
    fo >> p >> q;
    int ans;
    fa >> ans1 >> ans2;
    if (p == ans1 && q == ans2)
    {
        cout << "Correct!\n";
        return true;
    }
    else
    {
        cout << "Incorrect!\n";
        return false;
    }
}

main() {
  gets(input);
  gets(output);

  strcpy(answer, input);
  strcat(input,  "inp.txt");
  strcat(output, "out.txt");
  strcat(answer, "out.txt");

  readInput();
  readOutput();
  readAnswer();

  cout << ((check()) ? "1.00" : "0.00");
  fi.close();
  fo.close();
  fa.close();
//  system("pause");
}
