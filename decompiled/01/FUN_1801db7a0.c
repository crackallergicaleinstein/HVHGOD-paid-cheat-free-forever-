// FUN_1801db7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801db7a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801db7a0(char *param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if (param_1 == param_2) {
  }
  if (*param_1 == '}') {
  }
  puVar3 = (undefined8 *)FUN_1801e61d0(local_58,param_1,param_2,&local_48);
  if (((char)puVar3[1] == '\0') || (iVar2 = (int)*puVar3 - (int)param_1, iVar2 < 0))
  goto LAB_1801dbb48;
  pcVar6 = param_1;
  if (param_1 + iVar2 != param_2) {
    pcVar6 = param_1 + iVar2;
  }
  while (cVar5 = *pcVar6, cVar5 != '<') {
    if (cVar5 == '>') {
      uVar7 = 2;
      goto LAB_1801db857;
    }
    if (cVar5 == '^') {
      uVar7 = 3;
      goto LAB_1801db857;
    }
    if (pcVar6 == param_1) goto LAB_1801db8b6;
    pcVar6 = param_1;
  }
  uVar7 = 1;
LAB_1801db857:
  if (pcVar6 != param_1) {
    if (*param_1 == '{') {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("invalid fill character \'{\'");
    }
    uVar8 = (longlong)pcVar6 - (longlong)param_1;
    if (4 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Invalid fill (too long).");
    }
    lVar1 = *param_3;
    FUN_18063aed0(lVar1 + 0xf,param_1,uVar8);
    lVar1 = lVar1 + 0xf + uVar8;
    FUN_18063ab10(lVar1,0,(*param_3 - lVar1) + 0x13);
    *(char *)(*param_3 + 0xe) = (char)uVar8;
    param_1 = pcVar6;
  }
  param_1 = param_1 + 1;
  *(undefined1 *)(*param_3 + 9) = uVar7;
LAB_1801db8b6:
  if (param_1 == param_2) {
  }
  cVar5 = *param_1;
  if (cVar5 == ' ') {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1801dbba3;
    *(undefined1 *)(*param_3 + 10) = 3;
LAB_1801db91d:
    param_1 = param_1 + 1;
  }
  else {
    if (cVar5 == '+') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1801dbba3;
      *(undefined1 *)(*param_3 + 10) = 1;
      goto LAB_1801db91d;
    }
    if (cVar5 == '-') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1801dbba3;
      *(undefined1 *)(*param_3 + 10) = 2;
      goto LAB_1801db91d;
    }
  }
  if (param_1 != param_2) {
    if (*param_1 == '#') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1801dbba3;
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 0xb) = 1;
      if (param_1 == param_2) {
      }
    }
    if (*param_1 == '0') {
      *(undefined1 *)((longlong)param_3 + 0x1a) = 1;
      if ((8 < (byte)((char)param_3[3] - 1U)) && ((char)param_3[3] != '\n')) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Format specifier requires numeric or pointer argument.");
      }
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 0xd) = 1;
      if (param_1 == param_2) {
      }
    }
    if ((byte)(*param_1 - 0x31U) < 9) {
      uVar4 = 0;
      do {
        if (0xccccccc < uVar4) goto LAB_1801dbb89;
        cVar5 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (int)cVar5 + (uVar4 * 5 + -0x18) * 2;
      } while (((param_1 != param_2) && ('/' < *param_1)) && (*param_1 < ':'));
      if (0x7fffffff < uVar4) goto LAB_1801dbb89;
      *(uint *)*param_3 = uVar4;
    }
    else if (*param_1 == '{') {
      if (param_1 + 1 == param_2) goto LAB_1801dbb48;
      local_48 = param_3;
      param_1 = (char *)FUN_1801dd480(param_1 + 1,param_2,&local_48);
      if ((param_1 == param_2) || (*param_1 != '}')) goto LAB_1801dbb48;
      param_1 = param_1 + 1;
    }
    if (param_1 != param_2) {
      pcVar6 = param_1;
      if (*param_1 == '.') {
        pcVar6 = param_1 + 1;
        if (pcVar6 == param_2) {
LAB_1801dbb96:
                    /* WARNING: Subroutine does not return */
          FUN_1801e6400("Missing precision specifier.");
        }
        if ((byte)(*pcVar6 - 0x30U) < 10) {
          uVar4 = 0;
          do {
            if (0xccccccc < uVar4) goto LAB_1801dbb89;
            cVar5 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            uVar4 = (int)cVar5 + (uVar4 * 5 + -0x18) * 2;
          } while (((pcVar6 != param_2) && ('/' < *pcVar6)) && (*pcVar6 < ':'));
          if (0x7fffffff < uVar4) {
LAB_1801dbb89:
                    /* WARNING: Subroutine does not return */
            FUN_1801e6400("Number is too big");
          }
          if (((byte)((char)param_3[3] - 1U) < 6) || ((char)param_3[3] == '\n')) {
                    /* WARNING: Subroutine does not return */
            FUN_1801e6400("Precision not allowed for this argument type.");
          }
          *(uint *)(*param_3 + 4) = uVar4;
        }
        else {
          if (*pcVar6 != '{') goto LAB_1801dbb96;
          if (param_1 + 2 == param_2) {
LAB_1801dbb48:
                    /* WARNING: Subroutine does not return */
            FUN_1801e6400("Invalid format string.");
          }
          local_48 = param_3;
          pcVar6 = (char *)FUN_1801dd5f0(param_1 + 2,param_2,&local_48);
          if ((pcVar6 == param_2) || (*pcVar6 != '}')) goto LAB_1801dbb48;
          pcVar6 = pcVar6 + 1;
        }
        if (pcVar6 == param_2) {
        }
      }
      if (*pcVar6 == 'L') {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_1801dbba3:
                    /* WARNING: Subroutine does not return */
          FUN_1801e6400("Format specifier requires numeric argument.");
        }
        pcVar6 = pcVar6 + 1;
        *(undefined1 *)(*param_3 + 0xc) = 1;
        if (pcVar6 == param_2) {
        }
      }
      cVar5 = *pcVar6;
      if (cVar5 == '}') {
        cVar5 = '\0';
      }
      FUN_1801dbca0(param_3,cVar5);
    }
  }
}



