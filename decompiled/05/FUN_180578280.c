// FUN_180578280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578280 */

int FUN_180578280(longlong *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  bVar2 = false;
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == (longlong *)0x0) {
    return 0x28;
  }
  bVar3 = *param_2;
  puVar8 = (uint *)param_1[7];
  iVar4 = 0;
LAB_1805782e5:
  do {
    switch(bVar3) {
    case 4:
      iVar4 = FUN_180577bf0(param_1,*(undefined2 *)(param_2 + 2));
      if (iVar4 != 0) goto LAB_180578486;
      bVar3 = param_2[4];
      param_2 = param_2 + 4;
      puVar8 = (uint *)param_1[7];
      bVar2 = true;
      goto LAB_1805782e5;
    default:
      param_1[7] = (longlong)puVar8;
LAB_180578486:
      if (bVar2) {
        if (param_1[4] != 0) {
          if (*param_1 != 0) {
            (**(code **)(param_1[6] + 0x10))();
          }
          *param_1 = 0;
        }
        param_1[7] = 0;
        param_1[8] = 0;
      }
      return iVar4;
    case 8:
    case 9:
      uVar7 = (uint)(byte)*puVar8;
      sVar5 = 0x18;
      puVar8 = (uint *)((longlong)puVar8 + 1);
      break;
    case 0xc:
    case 0xd:
      uVar7 = (uint)*(byte *)((longlong)puVar8 + 1);
      puVar9 = (uint *)((longlong)puVar8 + 2);
      uVar6 = (uint)(byte)*puVar8;
      sVar5 = 0x10;
      goto LAB_180578428;
    case 0xe:
    case 0xf:
      uVar6 = (uint)*(byte *)((longlong)puVar8 + 1);
      puVar9 = (uint *)((longlong)puVar8 + 2);
      sVar5 = 0x10;
      goto LAB_180578424;
    case 0x10:
    case 0x11:
      uVar7 = CONCAT31(CONCAT21(CONCAT11((byte)*puVar8,*(byte *)((longlong)puVar8 + 1)),
                                *(byte *)((longlong)puVar8 + 2)),*(byte *)((longlong)puVar8 + 3));
      sVar5 = 0;
      puVar8 = puVar8 + 1;
      break;
    case 0x12:
    case 0x13:
      uVar7 = *puVar8;
      sVar5 = 0;
      puVar8 = puVar8 + 1;
      break;
    case 0x14:
    case 0x15:
      puVar9 = (uint *)((longlong)puVar8 + 3);
      sVar5 = 8;
      uVar6 = (uint)CONCAT11((byte)*puVar8,*(byte *)((longlong)puVar8 + 1));
      uVar7 = (uint)*(byte *)((longlong)puVar8 + 2);
      goto LAB_180578428;
    case 0x16:
    case 0x17:
      puVar9 = (uint *)((longlong)puVar8 + 3);
      sVar5 = 8;
      uVar6 = (uint)*(ushort *)((longlong)puVar8 + 1);
LAB_180578424:
      uVar7 = (uint)(byte)*puVar8;
LAB_180578428:
      uVar7 = uVar6 << 8 | uVar7;
      puVar8 = puVar9;
      break;
    case 0x18:
    case 0x19:
      bVar1 = param_2[1];
      if ((ulonglong)bVar1 <= (ulonglong)(param_1[8] - (longlong)puVar8)) goto code_r0x000180578345;
      iVar4 = 0x55;
      goto LAB_180578486;
    }
    if ((*param_2 & 1) != 0) {
      uVar7 = (int)(uVar7 << sVar5) >> sVar5;
    }
    puVar9 = (uint *)((ulonglong)*(ushort *)(param_2 + 2) + param_3);
    if (param_2[1] == 1) {
      param_2 = param_2 + 4;
      *(char *)puVar9 = (char)uVar7;
      bVar3 = *param_2;
    }
    else if (param_2[1] == 2) {
      param_2 = param_2 + 4;
      *(short *)puVar9 = (short)uVar7;
      bVar3 = *param_2;
    }
    else {
      param_2 = param_2 + 4;
      *puVar9 = uVar7;
      bVar3 = *param_2;
    }
  } while( true );
code_r0x000180578345:
  if (*param_2 == 0x18) {
    FUN_18063aed0((ulonglong)*(ushort *)(param_2 + 2) + param_3,puVar8,bVar1);
  }
  bVar3 = param_2[4];
  puVar8 = (uint *)((longlong)puVar8 + (ulonglong)bVar1);
  param_2 = param_2 + 4;
  goto LAB_1805782e5;
}



