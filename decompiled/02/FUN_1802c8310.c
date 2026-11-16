// FUN_1802c8310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c8310 */

undefined1 (*) [16]
FUN_1802c8310(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar8 = 1;
  pcVar7 = (char *)*param_2;
  pcVar6 = pcVar7 + param_2[1];
  pauVar3 = param_1;
  do {
    if (pcVar7 == pcVar6) {
      lVar1 = *(longlong *)param_1[1];
      while( true ) {
        if (lVar1 == 0) {
          return param_1;
        }
        uVar2 = *(ulonglong *)(param_1[1] + 8);
        pauVar3 = param_1;
        if (0xf < uVar2) {
          pauVar3 = *(undefined1 (**) [16])*param_1;
        }
        if (pauVar3[-1][lVar1 + 0xf] != ' ') break;
        *(longlong *)param_1[1] = lVar1 + -1;
        pauVar3 = param_1;
        if (0xf < uVar2) {
          pauVar3 = *(undefined1 (**) [16])*param_1;
        }
        pauVar3[-1][lVar1 + 0xf] = 0;
        lVar1 = *(longlong *)param_1[1];
      }
      return param_1;
    }
    cVar5 = *pcVar7;
    if (cVar5 == '^') {
      if (*(longlong *)param_1[1] != 0) {
        pauVar4 = param_1;
        if (0xf < *(ulonglong *)(param_1[1] + 8)) {
          pauVar4 = *(undefined1 (**) [16])*param_1;
        }
        if (pauVar4[-1][*(longlong *)param_1[1] + 0xf] != ' ') {
          cVar5 = ' ';
          goto LAB_1802c8387;
        }
      }
    }
    else {
LAB_1802c8387:
      FUN_18015af80(param_1,cVar5,param_3,param_4,uVar8,pauVar3);
    }
    pcVar7 = pcVar7 + 1;
  } while( true );
}



