// FUN_1805cfa50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cfa50 */

void FUN_1805cfa50(int param_1,int param_2,longlong param_3,longlong *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  undefined1 *puVar5;
  
  lVar3 = param_4[1];
  lVar2 = *param_4;
  if (param_2 != 0) {
    puVar5 = (undefined1 *)(param_3 + 4);
    do {
      param_2 = param_2 + -1;
      puVar1 = (undefined1 *)
               ((lVar2 - param_1 * (int)lVar3) + (ulonglong)*(ushort *)(puVar5 + -4) * 3);
      for (sVar4 = *(short *)(puVar5 + -2); sVar4 != 0; sVar4 = sVar4 + -1) {
        *puVar1 = *puVar5;
        puVar1 = puVar1 + 3;
      }
      puVar5 = puVar5 + 6;
    } while (param_2 != 0);
  }
  return;
}



