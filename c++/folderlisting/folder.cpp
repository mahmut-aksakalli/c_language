
#include <string>
#include <iostream>
#include <algorithm>
#include <sys/types.h>
#include <dirent.h>
#include <vector>
vector<string> *listdir(const char *);

int main(int argc, char ** argv) {
  vector<string> * vec;
  ostream_iterator<string> out(cout, " ");

  vec = listdir(argv[1]);
  copy(vec->begin(), vec->end(), out);
  cout << endl;
  return 0;
}

vector<string> *listdir(const char *dirname) {
  DIR *dp;
  dirent *d;
  vector<string> *vec = new vector<string>;

  dp = opendir(dirname);
  while((d = readdir(dp)) != NULL)
    vec->push_back(d->d_name);

  sort(vec->begin(), vec->end());
  return vec;
}
