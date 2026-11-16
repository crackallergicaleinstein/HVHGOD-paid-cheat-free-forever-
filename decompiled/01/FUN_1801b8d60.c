// FUN_1801b8d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b8d60 */

void FUN_1801b8d60(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  for (uVar8 = 0x3f; 0xfffffffffffffffU >> uVar8 == 0; uVar8 = uVar8 - 1) {
  }
  if ((ulonglong)(1L << (uVar8 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((ulonglong)((int)lVar9 + 1) & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_1801406e0(param_1 + 0x18,lVar9 * 2,plVar1);
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  *(longlong *)(param_1 + 0x38) = lVar9;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001801b8dd6:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        puVar10 = (undefined8 *)
                  (((((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar10 != plVar1) break;
        *puVar10 = plVar7;
        puVar10[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar10[1];
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar10[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar10 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar10 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x0001801b8dd6;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar9 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar10 = *(undefined8 **)(lVar9 + 8);
    *puVar10 = plVar7;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar10;
    plVar7 = plVar2;
  } while( true );
}



