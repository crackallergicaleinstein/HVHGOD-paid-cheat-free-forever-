// FUN_180287010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180287010 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180287010(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined2 local_37;
  ushort local_35;
  undefined *local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  uVar10 = DAT_180c653d8;
  if (DAT_180c653d8 == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c653d0) {
      uVar10 = 0;
    }
    else {
      local_30 = &DAT_1808f2b50;
      iVar3 = FUN_1805f68d0(&DAT_1808f2b50);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f2b9c == 0x7fffffff) {
        DAT_1808f2b9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c653d8 == 0) && (DAT_180c653d0 <= UVar4)) {
        DAT_180c653d8 = FUN_1804174b0("C_PlantedC4",0xca7488e0);
        if (DAT_180c653d8 == 0) {
          DAT_180c653d0 = UVar4 + 1000;
        }
        else {
          DAT_180c653d0 = 0xffffffffffffffff;
        }
      }
      uVar10 = DAT_180c653d8;
      FUN_1805f68fc(&DAT_1808f2b50);
    }
  }
  puVar5 = (undefined8 *)FUN_1803d44c0();
  plVar8 = (longlong *)*puVar5;
  plVar1 = (longlong *)puVar5[1];
  do {
    if (plVar8 == plVar1) {
      FUN_1801abba0(local_28);
    }
    if ((*plVar8 == 0) || (uVar10 == 0)) {
      local_35 = local_35 & 0xff;
      uVar7 = local_35;
    }
    else {
      lVar9 = (ulonglong)uVar10 + *plVar8;
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      if (lVar9 == 0) {
LAB_18028714a:
        local_37 = local_37 & 0xff;
      }
      else {
        local_38 = 0;
        cVar2 = FUN_1804514f0(&local_38,lVar9,1);
        if (cVar2 == '\0') goto LAB_18028714a;
        local_37 = CONCAT11(1,local_38);
      }
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      uVar7 = local_37;
    }
    cVar2 = (char)uVar7;
    if ((char)(uVar7 >> 8) == '\0') {
      cVar2 = '\0';
    }
    if (cVar2 != '\0') {
      FUN_1801abba0(local_28);
    }
    plVar8 = plVar8 + 3;
  } while( true );
}



