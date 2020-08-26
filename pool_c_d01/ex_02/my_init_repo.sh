#!/bin/bash

blih -u christian.villeger@epitech.eu repository create $1
blih -u christian.villeger@epitech.eu repository setacl $1 ramassage-tek r
blih -u christian.villeger@epitech.eu repository setacl $1 gecko r
git clone git@git.epitech.eu:/christian.villeger@epitech.eu/$1