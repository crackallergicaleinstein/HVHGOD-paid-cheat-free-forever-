// FUN_180384260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180384260 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180384260(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 auStack_688 [32];
  undefined **local_668;
  char *local_660;
  undefined8 *local_658;
  int *local_650;
  undefined4 *local_648;
  undefined4 *local_640;
  undefined8 local_638 [2];
  char local_628 [1544];
  ulonglong local_20;
  
  local_res20[0] = param_4;
  local_res18[0] = param_3;
  local_res10[0] = param_2;
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  local_638[0] = param_1;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if ((param_2 == 3) || (param_2 == 6)) {
    iVar3 = FUN_180384070(param_1);
  }
  else {
    iVar3 = 0;
  }
  local_658 = local_638;
  local_650 = local_res10;
  local_648 = local_res18;
  local_640 = local_res20;
  if (iVar3 != 0) {
    auVar4._0_4_ = (float)iVar3 / 100.0;
    auVar4._4_12_ = SUB1612(ZEXT816(0),4);
    cVar2 = FUN_180385780(&DAT_180ba2fe0,local_638[0],auVar4._0_8_,&local_658);
    cVar1 = DAT_180c70e30;
    if (cVar2 != '\0') {
      LOCK();
      DAT_180c70e30 = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        FUN_18063ab10(local_628,0,0x600);
        local_668 = (undefined **)CONCAT44(local_668._4_4_,iVar3);
        FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"opacity=%d blend=native_composite");
        local_668 = &PTR_180700558;
        if (local_628[0] != '\0') {
          local_668 = (undefined **)&DAT_1806bcfc0;
        }
        local_660 = local_628;
        FUN_1800f6900(1,local_660,"World","SMOKE_FINAL_OPACITY_ACTIVE");
      }
      goto LAB_1803843db;
    }
  }
  if (DAT_180c6fae0 != 0) {
    (*(code *)DAT_180c6fae0)(*local_658,*local_650,*local_648,*local_640);
  }
LAB_1803843db:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



