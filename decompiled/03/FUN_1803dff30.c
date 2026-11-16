// FUN_1803dff30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dff30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1803dff30(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  char *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  uVar3 = DAT_180c71f90;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809ba980;
  lVar2 = DAT_1808da460;
  if ((DAT_1809ba980 == DAT_1808da460) && (pcVar8 = (code *)DAT_180c71fb8, DAT_180c71fb8 != 0)) {
LAB_1803e00ba:
    puVar7 = (undefined8 *)(*pcVar8)(uVar3,0);
  }
  else {
    UVar5 = GetTickCount64();
    if ((lVar6 != lVar2) || (DAT_180c71f88 <= UVar5)) {
      local_38 = &DAT_1809ba870;
      iVar4 = FUN_1805f68d0(&DAT_1809ba870);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809ba8bc == 0x7fffffff) {
        DAT_1809ba8bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar9 = 1000;
      if (DAT_1809ba980 == lVar2) {
        if ((DAT_180c71fb8 == 0) && (DAT_180c71f88 <= UVar5)) goto LAB_1803e001c;
      }
      else {
        DAT_1809ba8c0 = 1000;
LAB_1803e001c:
        lVar6 = -1;
        do {
          local_50 = lVar6 + 1;
          lVar1 = lVar6 + 1;
          lVar6 = local_50;
        } while ("client.dll:8B0D????????8BD3>E8????????F20F1000"[lVar1] != '\0');
        local_58 = "client.dll:8B0D????????8BD3>E8????????F20F1000";
        local_48 = "patterns::get_view_angles";
        local_40 = 0x19;
        DAT_180c71fb8 = FUN_1800e5d20(&local_48,&local_58);
        DAT_1809ba980 = lVar2;
        DAT_180c71f88 = 0xffffffffffffffff;
        if (DAT_180c71fb8 == 0) {
          DAT_180c71f88 = DAT_1809ba8c0 + UVar5;
          uVar9 = 60000;
          if (DAT_1809ba8c0 < 60000) {
            uVar9 = DAT_1809ba8c0 * 2;
          }
        }
        DAT_1809ba8c0 = uVar9;
      }
      pcVar8 = (code *)DAT_180c71fb8;
      FUN_1805f68fc(&DAT_1809ba870);
      if (pcVar8 != (code *)0x0) goto LAB_1803e00ba;
    }
    puVar7 = (undefined8 *)0x0;
  }
  *param_2 = *puVar7;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar7 + 1);
  return param_2;
}



