// FUN_1804f2ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2ba0 */

void FUN_1804f2ba0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x2368) != 0) {
    lVar8 = 0;
    do {
      iVar2 = *(int *)(lVar8 + 8 + *(longlong *)(param_1 + 0x2370));
      if ((iVar2 != -1) &&
         (lVar6 = (longlong)iVar2 * 600 + *(longlong *)(param_1 + 0x2360), lVar6 != 0)) {
        *(undefined4 *)(lVar6 + 100) = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar5 != *(int *)(param_1 + 0x2368));
  }
  puVar4 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x27b8) != 0) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x27b8) + 4);
  }
  do {
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(ushort *)(puVar4 + 4);
    if ((((uVar1 & 0x7f) == 0) || ((uVar1 >> 7 & 0xf) == 0)) || (uVar1 >> 0xb == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (*(int *)(param_3 + 0xc) == 0) {
LAB_1804f2c9c:
      if ((*(char *)(param_3 + 8) != '\0') && (!bVar3)) goto LAB_1804f2ca7;
      if ((*(char *)(param_3 + 10) != '\0') || ((*(char *)(param_3 + 0xb) != '\0' && (!bVar3)))) {
        *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(param_1 + 0x2778);
      }
    }
    else {
      if ((((uVar1 & 0x7f) == 0) || ((uVar1 >> 7 & 0xf) == 0)) || (uVar1 >> 0xb == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = (((uVar1 & 0x7f) + 2000) * 100 + (uVar1 >> 7 & 0xf)) * 100 + (uint)(uVar1 >> 0xb);
      }
      if (*(int *)(param_3 + 0xc) <= iVar5) goto LAB_1804f2c9c;
LAB_1804f2ca7:
      *puVar4 = 0;
    }
    puVar7 = (undefined4 *)((longlong)(int)puVar4[-1] + (longlong)puVar4);
    puVar4 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)
                  (*(longlong *)(param_1 + 0x27b8) + 4 + (longlong)*(int *)(param_1 + 0x27b0))) {
      puVar4 = puVar7;
    }
  } while( true );
}



