// FUN_18030e510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030e510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030e510(undefined1 (*param_1) [16],longlong param_2)

{
  char cVar1;
  longlong lVar2;
  short *psVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined1 (*local_70) [16];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  iVar4 = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  local_78 = 1;
  if (0 < *(int *)(param_2 + 0x670)) {
    psVar3 = (short *)(param_2 + 0x172);
    local_70 = param_1;
    do {
      cVar1 = (char)psVar3[-1];
      local_a0 = (int)cVar1;
      if (cVar1 != '-') {
        local_a8 = (int)*psVar3;
        if (cVar1 == 'X') {
          FUN_18015abc0(local_68,0x40,"%d/%d:%c ",(int)*(char *)((longlong)psVar3 + -1));
        }
        else {
          local_80 = (double)*(float *)(psVar3 + 7);
          local_88 = (double)*(float *)(psVar3 + 5);
          local_90 = (double)*(float *)(psVar3 + 3);
          local_98 = (double)*(float *)(psVar3 + 1);
          FUN_18015abc0(local_68,0x40,"%d/%d:%c f=%.2f nz=%.2f g=%.1f a=%.0f ",
                        (int)*(char *)((longlong)psVar3 + -1));
        }
        lVar5 = -1;
        do {
          lVar2 = lVar5 + 1;
          lVar5 = lVar5 + 1;
        } while (local_68[lVar2] != '\0');
        FUN_18015b2a0(param_1,local_68);
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 10;
    } while (iVar4 < *(int *)(param_2 + 0x670));
  }
}



