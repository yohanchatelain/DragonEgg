// Make sure unbounded arrays compile with debug information.
// 
// RUN: %dragonegg -O0 -S -g %s

// PR1068

struct Object {
  char buffer[];
};

int main(int argc, char** argv) {
  new Object;
  return 0;
}
