#include <stdio.h>

int main() {
  int A, B, C, D, E, F, G, H;
  scanf("%i %i %i %i", &A, &B, &C, &D);
  scanf("%i %i %i %i", &E, &F, &G, &H);

  if (A == B || A == D || A == F || A == H) {
    if (B != A && B != D) {
      if ( (G == H && D == C) || (G != H && D != C)) {
        if (H == G || H == F) {
          if ((C == E && F == A) || (C != E && F != A)) {
            printf("Conseguimos times suficientes!");

          } else printf("Alguem nao esta satisfeito...");

        } else printf("Alguem nao esta satisfeito...");

      } else printf("Alguem nao esta satisfeito...");

    } else printf("Alguem nao esta satisfeito...");

  } else printf("Alguem nao esta satisfeito...");

}