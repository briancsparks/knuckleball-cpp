#include <iostream>
#include "rapidjson/document.h"

using namespace std;
using namespace rapidjson;

int main() {

  // http://rapidjson.org/md_doc_tutorial.html

  char const * json = R"({"hello":"world","t":true,"f":false,"n":null,"i":123,"pi":3.1416,"a":[1, 2, 3, 4]})";

  Document document;
  document.Parse(json);
  assert(document.IsObject());
  assert(document.HasMember("hello"));
  assert(document["hello"].IsString());

  cout << "hello = " << document["hello"].IsString();

  cout << endl;

  return 0;
}
