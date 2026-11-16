// FUN_1803840e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803840e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803840e0(undefined8 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined1 auStack_668 [32];
  undefined **local_648;
  char *local_640;
  undefined8 *local_638;
  int *local_630;
  undefined4 *local_628;
  undefined8 local_620;
  char local_618 [1544];
  ulonglong local_10;
  
  local_res18[0] = param_3;
  local_res10[0] = param_2;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  local_620 = param_1;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (param_2 - 3U < 2) {
    iVar3 = FUN_180384070(param_1);
  }
  else {
    iVar3 = 0;
  }
  local_638 = &local_620;
  local_630 = local_res10;
  local_628 = local_res18;
  if (iVar3 != 0) {
    auVar4._0_4_ = (float)iVar3 / 100.0;
    auVar4._4_12_ = SUB1612(ZEXT816(0),4);
    cVar2 = FUN_180384f20(&DAT_180ba2fe0,local_620,auVar4._0_8_,&local_638);
    cVar1 = DAT_180c70e31;
    if (cVar2 != '\0') {
      LOCK();
      DAT_180c70e31 = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        FUN_18063ab10(local_618,0,0x600);
        local_648 = (undefined **)CONCAT44(local_648._4_4_,iVar3);
        FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"opacity=%d blend=native_composite");
        local_648 = &PTR_180700558;
        if (local_618[0] != '\0') {
          local_648 = (undefined **)&DAT_1806bcfc0;
        }
        local_640 = local_618;
        FUN_1800f6900(1,local_640,"World","SMOKE_FINAL_OPACITY_ACTIVE");
      }
      goto LAB_18038423b;
    }
  }
  if (DAT_180c6fb40 != 0) {
    (*(code *)DAT_180c6fb40)(*local_638,*local_630,*local_628);
  }
LAB_18038423b:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



