// FUN_180222280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180222280 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180222280(undefined8 param_1,undefined8 param_2,ushort param_3,int param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_138 [6];
  undefined1 local_120 [216];
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  lVar4 = FUN_180221c10(param_1,(ulonglong)param_3,param_4);
  uVar9 = 0xffffffff;
  local_150 = 0;
  uStack_148 = 0xf;
  local_160._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_160._1_15_;
  local_160 = auVar2 << 8;
  plVar5 = (longlong *)
           (((((ulonglong)param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(param_3 >> 8)) * 0x100000001b3 & DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
  lVar7 = plVar5[1];
  if (lVar7 == DAT_180cc9c90) {
LAB_180222346:
    lVar7 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar7 + 0x10);
    while (param_3 != uVar1) {
      if (lVar7 == *plVar5) goto LAB_180222346;
      lVar7 = *(longlong *)(lVar7 + 8);
      uVar1 = *(ushort *)(lVar7 + 0x10);
    }
  }
  lVar6 = DAT_180cc9c90;
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  if (((lVar6 == DAT_180cc9c90) ||
      (lVar7 = *(longlong *)(lVar6 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar7 == 0)) ||
     (*(char *)(lVar7 + 0xb0) != '\0')) {
    local_168 = &DAT_180cc9e50;
    iVar3 = FUN_1805f68d0(&DAT_180cc9e50);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    plVar5 = DAT_180cc9fe8;
    if (DAT_180cc9e9c == 0x7fffffff) {
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    for (; plVar5 != DAT_180cc9ff0; plVar5 = plVar5 + 0x25) {
      if (((*plVar5 == lVar4) && (*(ushort *)(plVar5 + 2) == param_3)) &&
         ((int)plVar5[0x21] == param_4)) {
        uVar9 = (undefined4)plVar5[3];
        plVar8 = plVar5 + 6;
        if ((longlong *)local_160 != plVar8) {
          if (0xf < (ulonglong)plVar5[9]) {
            plVar8 = (longlong *)*plVar8;
          }
          FUN_180113930(local_160,plVar8,plVar5[8]);
        }
        break;
      }
    }
    uVar10 = FUN_1805f68fc(&DAT_180cc9e50);
    local_170 = local_160;
    local_178 = uVar9;
    FUN_1802224f0(uVar10,param_2,param_3,lVar4);
  }
  else {
    FUN_1801d6430(&DAT_180cc8068,local_138,param_3,param_4);
    if ((local_48 != '\0') && (lVar4 != 0)) {
      local_170 = local_120;
      local_178 = local_138[0];
      FUN_1802224f0(local_170,param_2,param_3,lVar4);
    }
    if (local_48 != '\0') {
      FUN_18015c010(local_120);
    }
  }
  FUN_18015c010(local_160);
}



