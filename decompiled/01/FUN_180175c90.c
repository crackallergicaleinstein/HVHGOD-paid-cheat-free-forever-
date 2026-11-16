// FUN_180175c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180175c90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180175c90(ulonglong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [16];
  undefined8 uStack_58;
  code *pcStack_50;
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_68 = (undefined1  [16])0x0;
  uStack_58 = 0;
  pcStack_50 = FUN_180179aa0;
  piVar1 = (int *)*param_3;
  local_78 = param_3;
  local_48 = param_1;
  if (piVar1 != (int *)0x0) {
    if ((piVar1[1] & 1U) == 0) {
      if (piVar1[1] != 0) {
        puVar5 = (undefined1 *)FUN_180113860(piVar1 + 2);
        if ((piVar1[1] & 1U) == 0) {
          if (piVar1[1] != 0) {
            local_68._8_8_ = puVar5;
            local_68._0_8_ = piVar1;
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            if (puVar5 != (undefined1 *)0x0) {
              *(undefined1 **)(puVar5 + 0x10) = local_68;
            }
            puVar5 = local_68;
          }
          LOCK();
          lVar2 = *(longlong *)(piVar1 + 2);
          *(undefined1 **)(piVar1 + 2) = puVar5;
          UNLOCK();
          if (((byte)lVar2 & 3) == 2) {
            FUN_1805fa36c(piVar1 + 2);
          }
        }
        else {
          LOCK();
          lVar2 = *(longlong *)(piVar1 + 2);
          *(undefined1 **)(piVar1 + 2) = puVar5;
          UNLOCK();
          if (((byte)lVar2 & 3) == 2) {
            FUN_1805fa36c(piVar1 + 2);
          }
          if (pcStack_50 == FUN_180179aa0) {
            FUN_18017cc60(local_48);
          }
          else {
            (*pcStack_50)(local_68);
          }
        }
      }
    }
    else {
      FUN_18017cc60(param_1);
    }
  }
  lVar2 = *(longlong *)(param_4 + 200);
  while( true ) {
    if (lVar2 != 0) {
      FUN_18017c1b0(local_68);
      piVar1 = (int *)*param_3;
      if (piVar1 != (int *)0x0) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_88._8_8_ = 0x15;
            local_88._0_8_ = "tier0.dll:g_pMemAlloc";
            DAT_180c7df30 = (undefined8 *)FUN_180451750(local_88);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar1);
        }
      }
    }
    uVar3 = *param_1;
    local_88._8_8_ = 0;
    local_88._0_8_ = uVar3;
    iVar4 = FUN_1805f68d0(uVar3);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(uVar3 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(uVar3 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_88[8] = 1;
    if ((*param_3 != 0) && ((*(uint *)(*param_3 + 4) & 1) != 0)) break;
    local_70 = param_2;
    if ((*param_2 == 0) || ((char)param_2[1] == '\0')) goto LAB_180175f96;
    FUN_1805f68fc();
    *(undefined1 *)(param_2 + 1) = 0;
    FUN_1805f6a84(param_1 + 2,*param_1);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017d0c0(1);
    }
    FUN_1805f68fc(uVar3);
    local_88[8] = 0;
    FUN_180179ab0(param_2);
    lVar2 = *(longlong *)(param_4 + 200);
  }
  if (uVar3 != 0) {
    FUN_1805f68fc(uVar3);
    FUN_18017c1b0(local_68);
    piVar1 = (int *)*param_3;
    if (piVar1 == (int *)0x0) {
    }
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 != 1) {
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_88._8_8_ = 0x15;
      local_88._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df30 = (undefined8 *)FUN_180451750(local_88);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar1);
  }
LAB_180175f96:
                    /* WARNING: Subroutine does not return */
  FUN_18017d0c0(1);
}



