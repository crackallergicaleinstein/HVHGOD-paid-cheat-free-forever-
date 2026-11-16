// FUN_1802e2500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e2500 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e2500(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStackY_718 [32];
  undefined1 local_698 [56];
  longlong *local_660;
  undefined1 local_658 [16];
  undefined8 *local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_718;
  local_660 = param_2;
  if (*param_2 != param_2[1]) {
    plVar6 = (longlong *)FUN_1802cbd00(local_698);
    lVar8 = *plVar6;
    lVar3 = plVar6[4];
    local_658 = (undefined1  [16])0x0;
    local_648 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)param_2[1];
    for (puVar7 = (undefined8 *)*param_2; puVar7 != puVar1; puVar7 = puVar7 + 3) {
      if ((puVar7[1] == lVar8) && (*(int *)((longlong)puVar7 + 4) != -1)) {
        if (lVar8 == 0) goto LAB_1802e25c0;
        if ((lVar3 == 0) || (cVar4 = FUN_180244810(lVar3,lVar8), cVar4 == '\0')) goto LAB_1802e25b5;
      }
      else {
LAB_1802e25b5:
        if ((lVar8 == 0) || (puVar7[1] == lVar8)) {
LAB_1802e25c0:
          if ((undefined8 *)local_658._8_8_ == local_648) {
            FUN_1802eac60(local_658,local_658._8_8_,puVar7);
          }
          else {
            uVar2 = puVar7[1];
            *(undefined8 *)local_658._8_8_ = *puVar7;
            *(undefined8 *)(local_658._8_8_ + 8) = uVar2;
            *(undefined8 *)(local_658._8_8_ + 0x10) = puVar7[2];
            local_658._8_8_ = (undefined8 *)(local_658._8_8_ + 0x18);
          }
        }
      }
    }
    if (local_658._0_8_ != local_658._8_8_) {
      iVar5 = FUN_1805f68d0(&DAT_180cc9b08);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180cc9b54 == 0x7fffffff) {
        DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      FUN_1802e7ed0(&DAT_180cc9af0,DAT_180cc9af8,local_658._0_8_,
                    (longlong)(local_658._8_8_ - local_658._0_8_) / 0x18);
      FUN_1805f68fc(&DAT_180cc9b08);
    }
    FUN_18063ab10(local_638,0,0x600);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"owned=%zu released=%u manager=0x%llx");
    FUN_1800f6900(0,local_638,"Impacts");
    if (local_658._0_8_ != 0) {
      lVar8 = local_658._0_8_;
      if ((0xfff < (ulonglong)((((longlong)local_648 - local_658._0_8_) / 0x18) * 0x18)) &&
         (lVar8 = *(longlong *)(local_658._0_8_ + -8), 0x1f < (local_658._0_8_ - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar8);
      local_658 = (undefined1  [16])0x0;
      local_648 = (undefined8 *)0x0;
    }
  }
  FUN_1801abba0(param_2);
}



