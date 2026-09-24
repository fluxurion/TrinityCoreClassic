#!/usr/bin/python3

# Resumes db_import.py from the Creatures step onward.
# Earlier steps (Misc, Pools clear, Events, Areas, Battlegrounds, Broadcast)
# already completed in a previous run.

import constants
import database as db
import importer.creature
import importer.gameobject
import importer.graveyard
import importer.gossip
import importer.item
import importer.loot
import importer.npc
import importer.player
import importer.pool
import importer.quest
import importer.skill
import importer.spell
import importer.trainer
import importer.transport
import importer.waypoint
import importer.cleanup

print("Resuming VMangos -> Trinity DB Import (from Creatures)...")

print("Opening DB...")
db.OpenAll()

print("Creatures...")
importer.creature.Import()

print("GameObjects...")
importer.gameobject.Import()

print("gossips...")
importer.gossip.Import()

print("graveyards...")
importer.graveyard.Import()

print("Items...")
importer.item.Import()

print("Loot...")
importer.loot.Import()

print("NPCs...")
importer.npc.Import()

print("Players...")
importer.player.Import()

print("Pool...")
importer.pool.Import()

print("Quests...")
importer.quest.Import()

print("Skills...")
importer.skill.Import()

print("Spells...")
importer.spell.Import()

print("Trainers")
importer.trainer.Import()

print("Transports...")
importer.transport.Import()

print("Waypoints...")
importer.waypoint.Import()

print("Cleanup...")
importer.cleanup.Clean()

print("Closing DB...")
db.CloseAll()

print("Done")
