struct moments
{
  int M0;
  double M1[3];
  double M2[3];
};
typedef struct cellule* cellule;
typedef struct moments* moments;
struct cellule
{
  int block;
  cellule next;
};

struct RAG
{
  int size;
  image img;
  moments m;
  int * father;
  cellule* neighbors;
};
