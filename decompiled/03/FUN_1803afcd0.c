// FUN_1803afcd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803afcd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803afcd0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_retaddr;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  char *local_98;
  longlong local_90;
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  PSRWLOCK pRStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c70330 != 0) {
    (*(code *)DAT_180c70330)();
  }
  if (DAT_180b0c858 == '\0') goto LAB_1803aff04;
  local_70 = 0;
  pRStack_68 = (PSRWLOCK)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_180244f40();
  if ((char)uStack_58 != '\0') {
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar3 = DAT_180903cf0;
    lVar4 = DAT_1808da460;
    if ((DAT_180903cf0 != DAT_1808da460) || (lVar5 = DAT_180c71990, DAT_180c71990 == 0)) {
      UVar2 = GetTickCount64();
      if ((lVar3 == lVar4) && (UVar2 < DAT_180c71988)) goto LAB_1803afee8;
      local_78 = &DAT_180903ca0;
      iVar1 = FUN_1805f68d0(&DAT_180903ca0);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180903cec == 0x7fffffff) {
        DAT_180903cec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar6 = 1000;
      if (DAT_180903cf0 == lVar4) {
        if ((DAT_180c71990 == 0) && (DAT_180c71988 <= UVar2)) goto LAB_1803afe13;
      }
      else {
        DAT_180903d50 = 1000;
LAB_1803afe13:
        lVar3 = -1;
        do {
          local_90 = lVar3 + 1;
          lVar5 = lVar3 + 1;
          lVar3 = local_90;
        } while ("client.dll:488D95????????488BC8E8????????0FB685????????33DB8BCB8885+F"[lVar5] !=
                 '\0');
        local_98 = "client.dll:488D95????????488BC8E8????????0FB685????????33DB8BCB8885+F";
        local_88 = "patterns::scope_render_return";
        local_80 = 0x1d;
        DAT_180c71990 = FUN_1800e5d20(&local_88,&local_98);
        DAT_180903cf0 = lVar4;
        DAT_180c71988 = 0xffffffffffffffff;
        if (DAT_180c71990 == 0) {
          DAT_180c71988 = DAT_180903d50 + UVar2;
          uVar6 = 60000;
          if (DAT_180903d50 < 60000) {
            uVar6 = DAT_180903d50 * 2;
          }
        }
        DAT_180903d50 = uVar6;
      }
      lVar5 = DAT_180c71990;
      FUN_1805f68fc(&DAT_180903ca0);
      if (lVar5 == 0) goto LAB_1803afee8;
    }
    if ((unaff_retaddr == lVar5) && (param_2 != 0)) {
      local_a8[0] = 0;
      if (param_2 + 4 != 0) {
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        FUN_1801ad7b0(param_2 + 4,local_a8);
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
      }
    }
  }
LAB_1803afee8:
  FUN_180180bf0(&local_70);
  if ((char)uStack_60 != '\0') {
    ReleaseSRWLockShared(pRStack_68);
  }
LAB_1803aff04:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



