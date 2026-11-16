// FUN_1802ae7d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ae7d0 */

void FUN_1802ae7d0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  plVar7 = DAT_180cd3d78;
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
  FUN_1801406e0(&DAT_180cd3d88,lVar9 * 2,DAT_180cd3d78);
  DAT_180cd3da0 = lVar9 - 1;
  DAT_180cd3da8 = lVar9;
  plVar6 = (longlong *)*DAT_180cd3d78;
joined_r0x0001802ae84e:
  do {
    while( true ) {
      while( true ) {
        if (plVar6 == plVar7) {
          return;
        }
        plVar1 = (longlong *)*plVar6;
        puVar10 = (undefined8 *)
                  (((((((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3 & DAT_180cd3da0)
                   * 0x10 + DAT_180cd3d88);
        if ((longlong *)*puVar10 != plVar7) break;
        *puVar10 = plVar6;
        puVar10[1] = plVar6;
        plVar6 = plVar1;
      }
      plVar2 = (longlong *)puVar10[1];
      if (plVar6[2] != plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar6) {
        puVar3 = (undefined8 *)plVar6[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar6;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar6[1] = (longlong)puVar5;
      }
      puVar10[1] = plVar6;
      plVar6 = plVar1;
    }
    do {
      if ((longlong *)*puVar10 == plVar2) {
        puVar3 = (undefined8 *)plVar6[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar6;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar6[1] = (longlong)puVar5;
        *puVar10 = plVar6;
        plVar6 = plVar1;
        goto joined_r0x0001802ae84e;
      }
      plVar2 = (longlong *)plVar2[1];
    } while (plVar6[2] != plVar2[2]);
    lVar9 = *plVar2;
    puVar10 = (undefined8 *)plVar6[1];
    *puVar10 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar9;
    puVar3 = *(undefined8 **)(lVar9 + 8);
    *puVar3 = plVar6;
    *(longlong **)(lVar9 + 8) = plVar2;
    plVar1[1] = (longlong)puVar10;
    plVar6[1] = (longlong)puVar3;
    plVar6 = plVar1;
  } while( true );
}



