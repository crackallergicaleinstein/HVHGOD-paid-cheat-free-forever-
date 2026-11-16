// FUN_18046d590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046d590 */

int * FUN_18046d590(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  piVar4 = param_1 + 1;
  if (piVar4 != param_2) {
    lVar3 = 4;
    do {
      iVar1 = *piVar4;
      lVar7 = (longlong)iVar1 * 0x20;
      bVar8 = (&DAT_18077eecc)[lVar7] == '\x03';
      lVar6 = (longlong)iVar1 * 0x9c;
      if (bVar8 == ((&DAT_18077eecc)[(longlong)*param_1 * 0x20] == '\x03')) {
        bVar8 = *(float *)(lVar6 + 4 + param_3) <
                *(float *)((longlong)*param_1 * 0x9c + 4 + param_3);
      }
      if (bVar8) {
        FUN_18063aed0(param_1 + 1,param_1,lVar3);
        *param_1 = iVar1;
      }
      else {
        piVar5 = piVar4;
        while( true ) {
          iVar2 = piVar5[-1];
          bVar8 = (&DAT_18077eecc)[lVar7] == '\x03';
          if (bVar8 == ((&DAT_18077eecc)[(longlong)iVar2 * 0x20] == '\x03')) {
            bVar8 = *(float *)(lVar6 + 4 + param_3) <
                    *(float *)((longlong)iVar2 * 0x9c + 4 + param_3);
          }
          if (!bVar8) break;
          *piVar5 = iVar2;
          piVar5 = piVar5 + -1;
        }
        *piVar5 = iVar1;
      }
      piVar4 = piVar4 + 1;
      lVar3 = lVar3 + 4;
    } while (piVar4 != param_2);
  }
  return param_2;
}



