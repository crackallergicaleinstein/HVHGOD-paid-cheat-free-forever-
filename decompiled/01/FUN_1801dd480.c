// FUN_1801dd480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dd480 */

char * FUN_1801dd480(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    puVar6 = (undefined8 *)*param_3;
    lVar2 = *(longlong *)(puVar6[1] + 0x18);
    if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Can not switch from manual to automatic indexing");
    }
    *(longlong *)(puVar6[1] + 0x18) = lVar2 + 1;
    FUN_1801db620(&local_28,puVar6[2]);
    puVar5 = &local_48;
LAB_1801dd59e:
    local_48 = local_28;
    uStack_40 = uStack_20;
    local_38 = local_18;
    uVar4 = FUN_1801e1190(puVar5);
    *(undefined4 *)*puVar6 = uVar4;
    return param_1;
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar3 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      do {
        if (0xccccccc < uVar3) goto LAB_1801dd5c3;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar3 = ((int)cVar1 + uVar3 * 10) - 0x30;
      } while (((param_1 != param_2) && ('/' < *param_1)) && (*param_1 < ':'));
      if (0x7fffffff < uVar3) {
LAB_1801dd5c3:
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Number is too big");
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}' || (*param_1 == ':')))) {
      puVar6 = (undefined8 *)*param_3;
      if (0 < *(longlong *)(puVar6[1] + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Can not switch from automatic to manual indexing");
      }
      *(undefined8 *)(puVar6[1] + 0x18) = 0xffffffffffffffff;
      FUN_1801db620(&local_48,puVar6[2],uVar3);
      local_28 = local_48;
      uStack_20 = uStack_40;
      local_18 = local_38;
      puVar5 = &local_28;
      goto LAB_1801dd59e;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1801e6400("Invalid format string.");
}



