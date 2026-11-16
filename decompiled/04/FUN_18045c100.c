// FUN_18045c100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045c100 */

ulonglong FUN_18045c100(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar2 = DAT_180c62c70;
  if ((longlong)*(ulonglong *)(param_1 + 0x20) < 0) {
    lVar2 = DAT_180c62c68;
  }
  if ((lVar2 != 0) &&
     (puVar5 = (uint *)((*(ulonglong *)(param_1 + 0x20) & 0x7fffffffffffffff) + lVar2),
     puVar5 != (uint *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      auVar7 = vpcmpeqd_avx(ZEXT116((byte)*puVar5),ZEXT416(0));
      auVar7 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar7);
      return auVar7._0_8_;
    }
    if (iVar1 == 1) {
      return (ulonglong)*puVar5;
    }
    if (iVar1 == 2) {
      auVar7._0_4_ = (float)(int)*puVar5;
      auVar7._4_12_ = SUB1612(ZEXT816(0),4);
      return auVar7._0_8_;
    }
    if (iVar1 == 3) {
      uVar4 = 0;
      uVar3 = 0;
      if (*(ulonglong *)(param_1 + 0x48) != 0) {
        do {
          if (0x17 < uVar3) break;
          if (*(char *)(uVar3 + (longlong)puVar5) != '\0') {
            uVar4 = uVar4 | 1 << ((uint)uVar3 & 0x1f);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 0x48));
      }
      auVar6._0_4_ = (float)uVar4;
      auVar6._4_12_ = SUB1612(ZEXT816(0),4);
      return auVar6._0_8_;
    }
  }
  return 0;
}



