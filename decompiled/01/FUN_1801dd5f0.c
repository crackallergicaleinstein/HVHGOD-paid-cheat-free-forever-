// FUN_1801dd5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dd5f0 */

char * FUN_1801dd5f0(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    param_3 = (longlong *)*param_3;
    if (((byte)((char)param_3[3] - 1U) < 6) || ((char)param_3[3] == '\n')) {
LAB_1801dd74d:
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Precision not allowed for this argument type.");
    }
    lVar2 = *(longlong *)(param_3[1] + 0x18);
    if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Can not switch from manual to automatic indexing");
    }
    *(longlong *)(param_3[1] + 0x18) = lVar2 + 1;
    FUN_1801db620(&local_28,param_3[2]);
    puVar5 = &local_48;
LAB_1801dd6df:
    local_48 = local_28;
    uStack_40 = uStack_20;
    local_38 = local_18;
    uVar3 = FUN_1801e12c0(puVar5);
    *(undefined4 *)(*param_3 + 4) = uVar3;
    return param_1;
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar4 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      do {
        if (0xccccccc < uVar4) goto LAB_1801dd767;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (int)cVar1 + (uVar4 * 5 + -0x18) * 2;
      } while (((param_1 != param_2) && ('/' < *param_1)) && (*param_1 < ':'));
      if (0x7fffffff < uVar4) {
LAB_1801dd767:
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Number is too big");
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}' || (*param_1 == ':')))) {
      param_3 = (longlong *)*param_3;
      if (((byte)((char)param_3[3] - 1U) < 6) || ((char)param_3[3] == '\n')) goto LAB_1801dd74d;
      if (0 < *(longlong *)(param_3[1] + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Can not switch from automatic to manual indexing");
      }
      *(undefined8 *)(param_3[1] + 0x18) = 0xffffffffffffffff;
      FUN_1801db620(&local_48,param_3[2],uVar4);
      local_28 = local_48;
      uStack_20 = uStack_40;
      local_18 = local_38;
      puVar5 = &local_28;
      goto LAB_1801dd6df;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1801e6400("Invalid format string.");
}



