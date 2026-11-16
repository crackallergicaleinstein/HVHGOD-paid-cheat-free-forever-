// FUN_180185660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185660 */

undefined1 (*) [16] FUN_180185660(undefined1 (*param_1) [16],undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  
  uVar2 = param_2[1];
  uVar3 = *param_2;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_18015ba30(0,uVar3,uVar2);
  if (*(ulonglong *)(param_1[1] + 8) < 0x10) {
    pauVar6 = param_1;
  }
  else {
    pauVar6 = *(undefined1 (**) [16])*param_1;
  }
  lVar4 = *(longlong *)param_1[1];
  puVar5 = *pauVar6;
  for (; pauVar6 != (undefined1 (*) [16])(puVar5 + lVar4);
      pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1)) {
    cVar1 = (*pauVar6)[0];
    if (('@' < cVar1) && (cVar1 < '[')) {
      (*pauVar6)[0] = cVar1 + ' ';
    }
  }
  return param_1;
}



