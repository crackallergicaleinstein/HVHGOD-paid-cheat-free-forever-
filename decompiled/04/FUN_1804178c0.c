// FUN_1804178c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804178c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804178c0(undefined8 param_1,ulonglong *param_2,float *param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  ULONGLONG UVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined1 local_1a8 [80];
  undefined1 local_158 [8];
  longlong local_150;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_ac;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  local_1c0 = *param_2;
  auVar5 = ZEXT864(local_1c0);
  local_1b8 = *(float *)(param_2 + 1);
  iVar3 = 0;
  fVar6 = 0.97;
  do {
    uVar4 = FUN_180419410(auVar5._0_8_,local_1a8,param_5);
    local_1e8 = local_1a8;
    FUN_180417b00(uVar4,local_158,&local_1c0,param_3);
    iVar1 = DAT_180c7d878;
    if (local_150 == param_4) {
    }
    if (fVar6 < local_ac) {
    }
    if (local_150 == 0) {
    }
    if ((DAT_180c7d878 == 0) && (UVar2 = GetTickCount64(), DAT_180c7d858 <= UVar2)) {
      local_1c8 = &DAT_1809c1100;
      iVar1 = FUN_1805f68d0(&DAT_1809c1100);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809c114c == 0x7fffffff) {
        DAT_1809c114c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c7d878 == 0) && (DAT_180c7d858 <= UVar2)) {
        DAT_180c7d878 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c7d878 == 0) {
          DAT_180c7d858 = UVar2 + 1000;
        }
        else {
          DAT_180c7d858 = 0xffffffffffffffff;
        }
      }
      iVar1 = DAT_180c7d878;
      FUN_1805f68fc(&DAT_1809c1100);
    }
    param_5 = local_150;
    if (99 < *(int *)(iVar1 + local_150) - 1U) {
    }
    local_1d8 = *param_3 - (float)local_1c0;
    local_1d4 = param_3[1] - local_1c0._4_4_;
    local_1d0 = param_3[2] - local_1b8;
    FUN_180450e30(&local_1d8);
    auVar5 = ZEXT464((uint)(local_1d4 + local_d0));
    local_1c0 = CONCAT44(local_1d4 + local_d0,local_1d8 + local_d4);
    local_1b8 = local_1d0 + local_cc;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
}



