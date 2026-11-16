// FUN_18027d090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027d090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027d090(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8,char param_9
                  )

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [48];
  byte local_78 [8];
  longlong local_70;
  int local_68;
  int local_64;
  int iStack_60;
  longlong local_58;
  int local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  FUN_18027c3e0(&local_70);
  iVar7 = -1;
  if (((((((local_48 == '\0') || (local_64 < 0)) || (iStack_60 < 0)) ||
        (((local_68 < 0 || (local_50 < 0)) || ((local_68 < local_64 || (local_50 < iStack_60))))))
       || ((local_64 != 0 && (local_70 == 0)))) || ((iStack_60 != 0 && (local_58 == 0)))) ||
     (iVar6 = iStack_60 + local_64, 0x100000 - iStack_60 < local_64)) {
    iVar6 = -1;
  }
  (*param_3)(param_4,param_5,param_6,param_2);
  FUN_18027c3e0(&local_70,param_2);
  if (local_48 != '\0') {
    if ((((((-1 < local_64) && (-1 < iStack_60)) && (-1 < local_68)) &&
         (((-1 < local_50 && (local_64 <= local_68)) &&
          ((iStack_60 <= local_50 && ((local_64 == 0 || (local_70 != 0)))))))) &&
        ((iStack_60 == 0 || (local_58 != 0)))) && (local_64 <= 0x100000 - iStack_60)) {
      iVar7 = iStack_60 + local_64;
    }
    if ((-1 < iVar6) && (iVar6 < iVar7)) {
      uVar3 = (ulonglong)param_8;
      local_78[0] = 0;
      local_78[1] = 2;
      local_78[2] = 3;
      local_78[3] = 4;
      local_78[4] = 5;
      local_78[5] = 6;
      local_78[6] = 8;
      local_78[7] = 9;
      if (10 < param_8) {
        if (param_8 < 0x13) {
          uVar3 = (ulonglong)local_78[param_8 - 0xb];
        }
        else {
          uVar3 = 2;
        }
      }
      bVar1 = (byte)uVar3;
      if (param_9 == '\0') {
        if (bVar1 < 0x13) {
          lVar10 = *(longlong *)(&DAT_180c7c270 + uVar3 * 8);
        }
        else {
          lVar10 = 0;
        }
      }
      else {
        local_78[0] = 0;
        local_78[1] = 2;
        local_78[2] = 3;
        local_78[3] = 4;
        local_78[4] = 5;
        local_78[5] = 6;
        local_78[6] = 8;
        local_78[7] = 9;
        if (10 < bVar1) {
          if (bVar1 < 0x13) {
            bVar1 = local_78[(int)uVar3 - 0xb];
          }
          else {
            bVar1 = 2;
          }
        }
        lVar10 = *(longlong *)(&DAT_180c72200 + (ulonglong)bVar1 * 8);
      }
      local_78[4] = 5;
      local_78[5] = 6;
      local_78[6] = 8;
      local_78[7] = 9;
      local_78[0] = 0;
      local_78[1] = 2;
      local_78[2] = 3;
      local_78[3] = 4;
      if (lVar10 != 0) {
        iVar2 = FUN_18027c2f0(&local_70);
        lVar9 = (longlong)iVar6;
        iVar4 = iVar6 - local_64;
        lVar8 = lVar9 * 0x70 + local_70;
        do {
          if (((iVar6 < 0) || (iVar2 < 0)) || (iVar2 <= iVar6)) {
            lVar5 = 0;
          }
          else if (iVar6 < local_64) {
            lVar5 = lVar8;
          }
          else {
            lVar5 = lVar8 + ((iVar4 - lVar9) * 0x70 - local_70) + local_58;
          }
          FUN_18027c510(lVar5,lVar10,param_7);
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x70;
        } while (iVar6 < iVar7);
      }
    }
  }
}



